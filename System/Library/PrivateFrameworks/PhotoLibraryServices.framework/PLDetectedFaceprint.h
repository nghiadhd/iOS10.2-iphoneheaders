/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLDetectedFace, NSData;

@interface PLDetectedFaceprint : PLManagedObject

@property (nonatomic,retain) PLDetectedFace * face; 
@property (assign,nonatomic) int faceprintVersion; 
@property (nonatomic,retain) NSData * data; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)entityName;
@end

