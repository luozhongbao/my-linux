#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37e3753e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xaadfbb0, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b4af316, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xee4b7762, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x32d5ee8a, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x74ef5eb, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x797f902c, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xfb7851ba, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xe5ae8cdb, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xcf789015, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x29b7dde4, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x11afc306, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xfa22686f, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x195a28e6, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xed3db21c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x5aa1c62d, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xce9765fe, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x9ccd5281, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xe6f69189, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x78c4dcbc, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x27fc74cb, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd21e7ed9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x266f6d22, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5257f88, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x13984c78, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x538616e4, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x281a2cf, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xe5b44425, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xea6f41a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6cfde737, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x289ba5b1, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0xc5033eb3, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x15aa3f21, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x8add9631, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17b71a66, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x3e3d779a, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x2a9ad912, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x28c7171e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x939a353, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xf52ed661, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xaab01ee1, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xd54f763c, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0x230c955d, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x9be06a70, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x7cd54fdd, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xacbfd1b2, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xcc20252a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3c13c574, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xb0a34c3f, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0x67424154, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xe436801e, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x5ca74c59, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x115273aa, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x604f5556, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x8edfa97f, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xb5cb3465, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0xbd5843fb, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xbf8e0af3, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xc35c9b7d, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x4f226deb, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x9593a466, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x61e0b24f, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x764e3a6d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4a1a440f, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0xf17daf96, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x693eb166, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xa82d33e8, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b9032b, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1ae6569, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x77b18c0a, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x8ec1ba8, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x67e79a85, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0xecfffe6, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x306e666c, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x423fe29b, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x7d1f4fe5, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xd899d882, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xe92c0744, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xa9b8739c, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xcf7b47e2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9776bcf4, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa6a1534a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x60c877d8, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x8d73278e, __VMLINUX_SYMBOL_STR(hex_asc_upper) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7d4a0278, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xbc8ffbf, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xaf19f370, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xc3fb602a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9ec8a8f5, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xf5c87628, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x729e6ed4, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xabba23fd, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xa715226, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x4dec6038, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0x340fc85, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xccb8ea8b, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";


MODULE_INFO(srcversion, "82E22D03A1F1B639E95B56E");
