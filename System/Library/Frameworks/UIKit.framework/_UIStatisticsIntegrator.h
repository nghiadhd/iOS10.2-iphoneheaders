/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIStatisticsIntegrator : NSObject {

	NSObject*<OS_dispatch_queue> _reportingQueue;

}
+(id)sharedInstance;
+(void)createSharedInstanceIfNecessary;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)setValue:(long long)arg1 forKey:(id)arg2 ;
-(void)resetDistributionForKey:(id)arg1 ;
-(void)resetDistributionToValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)resetValueForKey:(id)arg1 ;
-(void)incrementValueBy:(long long)arg1 forKey:(id)arg2 ;
-(void)batchRecord:(/*^block*/id)arg1 ;
@end

