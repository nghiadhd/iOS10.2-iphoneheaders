/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BiometricKit/BiometricKit-Structs.h>
@class NSDate;

@interface BiometricKitStatistics : NSObject {

	BOOL _fingerOn;
	BOOL _enrolling;
	BOOL _badImagePerFingerDown;
	NSDate* _enrollmentStarTime;
	unsigned _touchesPerEnroll;
	unsigned _badImagesPerEnroll;
	unsigned _rejectedImagesPerEnroll;
	unsigned _primaryClusterAdditions;
	unsigned _primaryClusterFailedAdditions;
	unsigned _otherClustersAdditions;
	unsigned _joinEvents;
	double _area;
	double _primaryClusterArea;

}
+(id)statistics;
-(id)init;
-(void)initEnrollmentValues;
-(void)enroll:(int)arg1 ;
-(void)enrollResult:(id)arg1 componentSet:(SCD_Struct_Bi0*)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollProgress:(id)arg1 ;
@end

