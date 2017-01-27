/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController {

	NSArray* _applicationActivities;
	NSArray* _providers;

}

@property (copy) id excludedActivityTypes; 
@property (readonly) NSString * activityTypeAddToReadingList; 
@property (readonly) NSString * activityTypeAssignToContact; 
@property (readonly) NSString * activityTypeCopyToPasteboard; 
@property (readonly) NSString * activityTypeMail; 
@property (readonly) NSString * activityTypeMessage; 
@property (readonly) NSString * activityTypePostToFacebook; 
@property (readonly) NSString * activityTypePostToFlickr; 
@property (readonly) NSString * activityTypePostToTwitter; 
@property (readonly) NSString * activityTypePostToVimeo; 
@property (readonly) NSString * activityTypePostToWeibo; 
@property (readonly) NSString * activityTypePrint; 
@property (readonly) NSString * activityTypeSaveToCameraRoll; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(id)excludedActivityTypes;
-(id)attributeKeys;
-(id)newNativeViewController;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
-(id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2 ;
-(NSString *)activityTypeAddToReadingList;
-(NSString *)activityTypeAssignToContact;
-(NSString *)activityTypeCopyToPasteboard;
-(NSString *)activityTypeMail;
-(NSString *)activityTypeMessage;
-(NSString *)activityTypePostToFacebook;
-(NSString *)activityTypePostToFlickr;
-(NSString *)activityTypePostToTwitter;
-(NSString *)activityTypePostToVimeo;
-(NSString *)activityTypePostToWeibo;
-(NSString *)activityTypePrint;
-(NSString *)activityTypeSaveToCameraRoll;
-(id)scriptAttributeKeys;
-(id)_className;
@end

