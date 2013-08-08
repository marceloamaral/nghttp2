/*
 * nghttp2 - HTTP/2.0 C Library
 *
 * Copyright (c) 2012 Tatsuhiro Tsujikawa
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef NGHTTP2_SESSION_TEST_H
#define NGHTTP2_SESSION_TEST_H

void test_nghttp2_session_recv(void);
void test_nghttp2_session_recv_invalid_stream_id(void);
void test_nghttp2_session_recv_invalid_frame(void);
void test_nghttp2_session_recv_eof(void);
void test_nghttp2_session_recv_data(void);
void test_nghttp2_session_add_frame(void);
void test_nghttp2_session_on_request_headers_received(void);
void test_nghttp2_session_on_response_headers_received(void);
void test_nghttp2_session_on_headers_received(void);
void test_nghttp2_session_on_push_response_headers_received(void);
void test_nghttp2_session_on_priority_received(void);
void test_nghttp2_session_on_rst_stream_received(void);
void test_nghttp2_session_on_settings_received(void);
void test_nghttp2_session_on_push_promise_received(void);
void test_nghttp2_session_on_ping_received(void);
void test_nghttp2_session_on_goaway_received(void);
void test_nghttp2_session_on_window_update_received(void);
void test_nghttp2_session_on_data_received(void);
void test_nghttp2_session_send_headers_start_stream(void);
void test_nghttp2_session_send_headers_reply(void);
void test_nghttp2_session_send_headers_header_comp_error(void);
void test_nghttp2_session_send_headers_push_reply(void);
void test_nghttp2_session_send_priority(void);
void test_nghttp2_session_send_rst_stream(void);
void test_nghttp2_session_send_push_promise(void);
void test_nghttp2_session_is_my_stream_id(void);
void test_nghttp2_session_upgrade(void);
void test_nghttp2_submit_response(void);
void test_nghttp2_submit_response_without_data(void);
void test_nghttp2_submit_request_with_data(void);
void test_nghttp2_submit_request_without_data(void);
void test_nghttp2_submit_headers_start_stream(void);
void test_nghttp2_submit_headers_reply(void);
void test_nghttp2_submit_headers_push_reply(void);
void test_nghttp2_submit_headers(void);
void test_nghttp2_submit_priority(void);
void test_nghttp2_submit_settings(void);
void test_nghttp2_submit_settings_update_local_window_size(void);
void test_nghttp2_submit_push_promise(void);
void test_nghttp2_submit_window_update(void);
void test_nghttp2_submit_window_update_local_window_size(void);
void test_nghttp2_submit_invalid_nv(void);
void test_nghttp2_session_open_stream(void);
void test_nghttp2_session_get_next_ob_item(void);
void test_nghttp2_session_pop_next_ob_item(void);
void test_nghttp2_session_reply_fail(void);
void test_nghttp2_session_max_concurrent_streams(void);
void test_nghttp2_session_stream_close_on_headers_push(void);
void test_nghttp2_session_stop_data_with_rst_stream(void);
void test_nghttp2_session_defer_data(void);
void test_nghttp2_session_flow_control(void);
void test_nghttp2_session_flow_control_disable_remote(void);
void test_nghttp2_session_flow_control_disable_local(void);
void test_nghttp2_session_flow_control_data_recv(void);
void test_nghttp2_session_data_read_temporal_failure(void);
void test_nghttp2_session_on_request_recv_callback(void);
void test_nghttp2_session_on_stream_close(void);
void test_nghttp2_session_on_ctrl_not_send(void);
void test_nghttp2_session_get_outbound_queue_size(void);
void test_nghttp2_session_set_option(void);
void test_nghttp2_session_data_backoff_by_high_pri_frame(void);
void test_nghttp2_pack_settings_payload(void);

#endif /* NGHTTP2_SESSION_TEST_H */
