/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSMutableArray, NSMutableSet;

@interface VKMapDebugView : UIView {

	NSString* _debugMessage;
	NSMutableArray* _buildingPaths;
	NSMutableSet* _intersectionPoints;
	NSMutableArray* _poiPaths;
	NSMutableArray* _roadPaths;
	NSMutableArray* _roadPoints;
	CGPoint _currentPoint;
	CGPoint _frontierPoint;

}

@property (nonatomic,retain) NSMutableArray * buildingPaths;                 //@synthesize buildingPaths=_buildingPaths - In the implementation block
@property (assign,nonatomic) CGPoint currentPoint;                           //@synthesize currentPoint=_currentPoint - In the implementation block
@property (assign,nonatomic) CGPoint frontierPoint;                          //@synthesize frontierPoint=_frontierPoint - In the implementation block
@property (nonatomic,retain) NSMutableSet * intersectionPoints;              //@synthesize intersectionPoints=_intersectionPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * poiPaths;                      //@synthesize poiPaths=_poiPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadPaths;                     //@synthesize roadPaths=_roadPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadPoints;                    //@synthesize roadPoints=_roadPoints - In the implementation block
@property (nonatomic,copy) NSString * debugMessage;                          //@synthesize debugMessage=_debugMessage - In the implementation block
+(id)sharedInstance;
-(void)setBuildingPaths:(NSMutableArray *)arg1 ;
-(void)setIntersectionPoints:(NSMutableSet *)arg1 ;
-(void)setCurrentPoint:(CGPoint)arg1 ;
-(void)setCurrentPoint:(CGPoint)arg1 frontierPoint:(CGPoint)arg2 ;
-(void)_addValidPaths:(id)arg1 array:(id)arg2 ;
-(void)setFrontierPoint:(CGPoint)arg1 ;
-(NSMutableSet *)intersectionPoints;
-(void)removePointsAndPaths;
-(NSMutableArray *)roadPaths;
-(CGPoint)frontierPoint;
-(void)addIntersectionPoints:(id)arg1 ;
-(void)addBuildingPaths:(id)arg1 ;
-(NSMutableArray *)roadPoints;
-(NSMutableArray *)buildingPaths;
-(NSMutableArray *)poiPaths;
-(void)addRoadPoints:(id)arg1 ;
-(void)addPOIPaths:(id)arg1 ;
-(void)addRoadPaths:(id)arg1 ;
-(void)setPoiPaths:(NSMutableArray *)arg1 ;
-(void)setRoadPaths:(NSMutableArray *)arg1 ;
-(void)setRoadPoints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)currentPoint;
-(void)_orientationDidChange:(id)arg1 ;
-(void)setDebugMessage:(NSString *)arg1 ;
-(NSString *)debugMessage;
@end

