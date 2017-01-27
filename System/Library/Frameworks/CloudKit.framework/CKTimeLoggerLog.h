/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray;

@interface CKTimeLoggerLog : NSObject <NSCoding> {

	NSString* _type;
	double _beginTime;
	double _endTime;
	NSString* _beginningMessage;
	NSString* _endingMessage;
	NSMutableArray* _pauseRecords;

}

@property (nonatomic,retain) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double beginTime;                           //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * beginningMessage;                //@synthesize beginningMessage=_beginningMessage - In the implementation block
@property (nonatomic,retain) NSString * endingMessage;                   //@synthesize endingMessage=_endingMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * pauseRecords;              //@synthesize pauseRecords=_pauseRecords - In the implementation block
@property (readonly) double elapsedTime; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(double)elapsedTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setBeginningMessage:(NSString *)arg1 ;
-(void)setEndingMessage:(NSString *)arg1 ;
-(void)togglePauseWithTime:(double)arg1 message:(id)arg2 ;
-(void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(BOOL)arg3 ;
-(void)setPauseRecords:(NSMutableArray *)arg1 ;
-(NSString *)beginningMessage;
-(NSString *)endingMessage;
-(NSMutableArray *)pauseRecords;
@end

