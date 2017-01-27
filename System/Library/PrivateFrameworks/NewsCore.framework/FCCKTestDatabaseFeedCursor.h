/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface FCCKTestDatabaseFeedCursor : NSObject <NSCopying, NSCoding> {

	NSNumber* _order;
	NSNumber* _subOrder;

}

@property (nonatomic,copy) NSNumber * order;                 //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSNumber * subOrder;              //@synthesize subOrder=_subOrder - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrder:(NSNumber *)arg1 ;
-(NSNumber *)order;
-(NSNumber *)subOrder;
-(void)setSubOrder:(NSNumber *)arg1 ;
@end

