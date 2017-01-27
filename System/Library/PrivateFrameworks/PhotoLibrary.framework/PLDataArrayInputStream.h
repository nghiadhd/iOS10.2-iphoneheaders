/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol PLDataArrayInputStreamProgressDelegate;
@class NSArray, NSMutableData;

@interface PLDataArrayInputStream : NSInputStream {

	NSArray* _dataArray;
	NSMutableData* _bodyData;
	unsigned long long _dataCount;
	unsigned long long _dataLength;
	unsigned long long _dataOffset;
	unsigned long long _currentIndex;
	unsigned long long _currentOffset;
	unsigned long long _currentLength;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	id _delegate;
	id<PLDataArrayInputStreamProgressDelegate> _progressDelegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_PL7* _clientContext;

}

@property (assign,nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PL7*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)close;
-(void)open;
-(unsigned long long)bytesRead;
-(void)_scheduleCallback;
-(void)_scheduleProgressUpdate;
-(id)initWithDataArray:(id)arg1 ;
-(void)_streamEventTrigger;
-(unsigned long long)totalBytes;
-(void)setProgressDelegate:(id<PLDataArrayInputStreamProgressDelegate>)arg1 ;
-(id<PLDataArrayInputStreamProgressDelegate>)progressDelegate;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(void)_updateProgress;
@end

