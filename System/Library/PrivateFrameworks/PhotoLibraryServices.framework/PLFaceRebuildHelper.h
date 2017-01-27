/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
@end

