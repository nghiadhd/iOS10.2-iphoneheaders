/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADAngleArcPathElement : OADPathElement {

	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;

}
-(OADAdjustPoint)center;
-(OADAdjustCoord)startAngle;
-(id)initWithCenter:(OADAdjustPoint)arg1 semiaxes:(OADAdjustPoint)arg2 startAngle:(OADAdjustCoord)arg3 angleLength:(OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end

