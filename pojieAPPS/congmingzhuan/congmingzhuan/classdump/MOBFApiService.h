//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/MOBFHttpService.h>

@interface MOBFApiService : MOBFHttpService
{
}

+ (id)_getRSAHelperWithKeySize:(int)arg1 publicKey:(id)arg2 modulus:(id)arg3;
+ (id)sendRequestByURLString:(id)arg1 data:(id)arg2 headers:(id)arg3 timeout:(double)arg4 rsaKeySize:(int)arg5 rsaPublicKey:(id)arg6 rsaModulus:(id)arg7 compressData:(_Bool)arg8 onResult:(CDUnknownBlockType)arg9 onFault:(CDUnknownBlockType)arg10;

@end

