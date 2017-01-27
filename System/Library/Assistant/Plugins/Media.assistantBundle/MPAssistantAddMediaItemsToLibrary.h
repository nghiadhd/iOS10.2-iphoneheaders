/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <SAObjects/SAMPAddMediaItemsToLibrary.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaItemsToLibrary : SAMPAddMediaItemsToLibrary <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_addMediaItemsToLibrarySupported;
-(void)_performAddMediaItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestCompanionToAddMediaItemsForOrigin:(MROriginRef)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_extractAtomID;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

