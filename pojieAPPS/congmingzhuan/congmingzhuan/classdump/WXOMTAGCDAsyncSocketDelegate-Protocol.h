//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSURL, WXOMTAGCDAsyncSocket;

@protocol WXOMTAGCDAsyncSocketDelegate <NSObject>

@optional
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)socketDidSecure:(WXOMTAGCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(WXOMTAGCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(WXOMTAGCDAsyncSocket *)arg1;
- (double)socket:(WXOMTAGCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(WXOMTAGCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didConnectToUrl:(NSURL *)arg2;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(WXOMTAGCDAsyncSocket *)arg1 didAcceptNewSocket:(WXOMTAGCDAsyncSocket *)arg2;
- (struct dispatch_queue_s *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(WXOMTAGCDAsyncSocket *)arg2;
@end

