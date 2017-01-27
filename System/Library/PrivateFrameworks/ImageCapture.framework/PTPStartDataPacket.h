/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPStartDataPacket : NSObject {

	unsigned _transactionID;
	unsigned long long _totalDataSize;

}
-(id)description;
-(id)contentForTCP;
-(id)initWithTransactionID:(unsigned)arg1 totalDataSize:(unsigned long long)arg2 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned long long)totalDataSize;
-(void)setTotalDataSize:(unsigned long long)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
@end

