/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class MFError, NSData, MFDAMessageStore;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	MFDAMessageStore* _store;

}

@property (nonatomic,readonly) BOOL succeeded;                      //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsData;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(BOOL)succeeded;
-(MFDAMessageStore *)store;
@end

