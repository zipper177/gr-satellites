# Copyright 2011 Free Software Foundation, Inc.
#
# This file was generated by gr_modtool, a tool from the GNU Radio framework
# This file is a part of gr-satellites
#
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Radio; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.

install(FILES
    satellites_codec2_udp_sink.block.yml
    satellites_file_receiver.block.yml
    satellites_hexdump_sink.block.yml
    satellites_image_receiver.block.yml
    satellites_kiss_file_sink.block.yml
    satellites_kiss_server_sink.block.yml
    satellites_telemetry_parser.block.yml
    satellites_telemetry_submit.block.yml
    DESTINATION share/gnuradio/grc/blocks
)
