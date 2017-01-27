/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPResultSet : NSObject <NSSecureCoding> {

	NSArray* _resultSections;
	NSArray* _stableSections;

}

@property (nonatomic,readonly) NSArray * resultSections;              //@synthesize resultSections=_resultSections - In the implementation block
@property (nonatomic,readonly) NSArray * stableSections;              //@synthesize stableSections=_stableSections - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)resultSections;
-(NSArray *)stableSections;
-(id)initWithSections:(id)arg1 stableSections:(id)arg2 ;
@end

