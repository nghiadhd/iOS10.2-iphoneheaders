/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface NPNetworkInfo : NSObject <NSSecureCoding> {

	NSDate* _lastVisited;
	NSDate* _lastUsed;

}

@property (retain) NSDate * lastVisited;                      //@synthesize lastVisited=_lastVisited - In the implementation block
@property (retain) NSDate * lastUsed;                         //@synthesize lastUsed=_lastUsed - In the implementation block
@property (readonly) NSString * lastVisitedDesc; 
@property (readonly) NSString * lastUsedDesc; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)lastVisited;
-(NSDate *)lastUsed;
-(void)setLastVisited:(NSDate *)arg1 ;
-(void)setLastUsed:(NSDate *)arg1 ;
-(long long)compareLastVisited:(id)arg1 ;
-(NSString *)lastVisitedDesc;
-(NSString *)lastUsedDesc;
@end

