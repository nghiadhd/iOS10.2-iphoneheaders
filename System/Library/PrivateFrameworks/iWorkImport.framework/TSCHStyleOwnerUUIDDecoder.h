/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHStyleOwnerUUIDDecoder : NSObject {

	unsigned char mUUID[16];
	unsigned long long mIndex;

}
+(id)UUIDDecoderWithUUID:(id)arg1 ;
-(BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1 ;
-(unsigned long long)decodeNSUIntegerFromUInt64;
-(void)endDecode;
-(unsigned char)decodeByte;
-(unsigned long long)decodeUInt64;
-(id)initWithUUID:(id)arg1 ;
@end

