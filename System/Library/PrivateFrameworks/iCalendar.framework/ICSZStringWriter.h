/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/iCalendar-Structs.h>
#import <libobjc.A.dylib/ICSAppendable.h>

@class NSMutableData, NSString;

@interface ICSZStringWriter : NSObject <ICSAppendable> {

	z_stream_s* _strm;
	NSMutableData* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 andFlush:(BOOL)arg3 ;
-(id)zResult;
@end

