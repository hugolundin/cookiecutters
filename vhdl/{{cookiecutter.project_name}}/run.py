from vunit import VUnit, VUnitCLI
from os.path import join, dirname
from os import system

WAVE_VIEWER = 'open'

def show(results):
    report = results.get_report()

    for key, test in report.tests.items():
        wave_file = f'{test.path}/ghdl/wave.vcd'
        system(f'{WAVE_VIEWER} {wave_file}')

if __name__ == "__main__":
    cli = VUnitCLI()
    cli.parser.add_argument('--wave', action='store_true', default=False, help='Show wave file in the set viewer.')
    args = cli.parse_args()

    if args.wave:
        args.gtkwave_fmt = "vcd"

    project = VUnit.from_args(args=args)
    project.enable_check_preprocessing()
    project.enable_location_preprocessing()

    root = dirname(__file__)
    lock = project.add_library('{{cookiecutter.project_name}}');
    lock.add_source_files(join(root, 'src', '*.vhd'))
    lock.add_source_files(join(root, 'sim', '*.vhd'))

    if args.wave:
        project.main(post_run=show)
    else:
        project.main()
