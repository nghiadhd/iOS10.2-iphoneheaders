/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton> {

	NSMutableArray* _dialogs;

}

@property (nonatomic,readonly) long long numberOfPendingDialogs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
+(id)newDialogWithError:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfPendingDialogs;
-(void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(BOOL)_isDisplayingEquivalentDialog:(id)arg1 ;
-(void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 ;
-(BOOL)presentDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)presentDialog:(id)arg1 ;
@end

