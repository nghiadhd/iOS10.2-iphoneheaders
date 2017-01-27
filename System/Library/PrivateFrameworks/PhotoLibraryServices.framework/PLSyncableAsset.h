/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSDate;


@protocol PLSyncableAsset <NSObject>
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,copy,readonly) NSDate * dateForComparingAdjustmentVersions; 
@property (nonatomic,readonly) short width; 
@property (nonatomic,readonly) short height; 
@required
-(short)width;
-(short)height;
-(NSSet *)detectedFaces;
-(void)setDetectedFaces:(id)arg1;
-(NSDate *)dateForComparingAdjustmentVersions;

@end

