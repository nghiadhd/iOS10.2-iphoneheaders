/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>

@interface GKSphereObstacle : GKObstacle {

	SphericalObstacle* _obstacle;

}

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic)  position; 
+(id)obstacleWithRadius:(float)arg1 ;
-(id)init;
-(void)setPosition:;
-()position;
-(id)initWithRadius:(float)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
-(Obstacle*)obstacle;
@end

