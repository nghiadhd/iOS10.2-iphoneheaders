/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskMetrics.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDateInterval;

@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding> {

	NSArray* _transactionMetrics;
	NSDateInterval* _taskInterval;
	unsigned long long _redirectCount;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithTask:(id)arg1 ;
-(void)setTaskInterval:(id)arg1 ;
-(void)setTransactionMetrics:(id)arg1 ;
-(id)taskInterval;
-(id)transactionMetrics;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(unsigned long long)redirectCount;
@end

