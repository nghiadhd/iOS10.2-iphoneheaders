/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSArray;

@interface AKModelController : NSObject {

	NSMutableOrderedSet* _mutablePageModelControllers;

}

@property (readonly) NSArray * pageModelControllers; 
-(id)init;
-(id)allSelectedAnnotations;
-(id)archivedPageModelControllers;
-(id)pageModelControllerForAnnotation:(id)arg1 ;
-(NSArray *)pageModelControllers;
-(void)deleteAllSelectedAnnotations;
-(void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1 ;
-(void)removePageModelControllersAtIndexes:(id)arg1 ;
-(void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2 ;
-(id)pageModelControllerForPage:(unsigned long long)arg1 ;
-(void)deselectAllAnnotations;
-(void)populateFromArchivedPageModelControllers:(id)arg1 ;
@end

