/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	unsigned long long _remainingUncompressedSize;
	unsigned _CRC;
	BOOL _validateCRC;
	z_stream_s* _stream;
	unsigned long long _outBufferSize;
	char* _outBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)prepareBuffer;
-(BOOL)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned*)arg3 isDone:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned)arg3 validateCRC:(BOOL)arg4 ;
-(void)dealloc;
-(void)close;
@end

