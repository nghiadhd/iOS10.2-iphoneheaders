/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECEFCoordinate : NSObject {

	double _x;
	double _y;
	double _z;

}

@property (assign,x,nonatomic) double x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;              //@synthesize z=_z - In the implementation block
+(id)fromLatLon:(id)arg1 ;
-(id)init;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(double)z;
-(void)setZ:(double)arg1 ;
-(id)initFromLatLon:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
@end

