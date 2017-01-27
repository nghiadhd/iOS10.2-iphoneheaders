/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSDataCluster : NSObject {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (nonatomic,retain) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                   //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                   //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 ;
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
-(id)init;
-(id)description;
-(void)setScore:(double)arg1 ;
-(id)locations;
-(double)score;
-(NSArray *)objects;
-(id)dates;
-(void)setObjects:(NSArray *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(id)meanDate;
-(void)setClustroid:(id)arg1 ;
-(id)clustroid;
@end

