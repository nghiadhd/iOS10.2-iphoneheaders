/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol SFUInputStream, OS_dispatch_queue;
@class SFUDataRepresentation, NSObject, NSString;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {

	SFUDataRepresentation* _representation;
	id<SFUInputStream> _inputStream;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)close;
-(void)_close;
-(id)initWithRepresentation:(id)arg1 ;
@end

