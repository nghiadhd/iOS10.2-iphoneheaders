/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHUpdateChangeRequest <PHChangeRequest>
@property (getter=isMutated,readonly) BOOL mutated; 
@required
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(BOOL)isMutated;

@end

