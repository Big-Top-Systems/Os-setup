void drivers_init() {
    init_pci();
    init_storage();
    init_input();
    init_network();
    init_video();
    init_audio();
    init_usb();
    init_power();
}
