/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class LSApplicationProxy, LSDocumentProxy, NSString;

@interface _UIOpenInAppActivity : UIActivity <LSOpenResourceOperationDelegate> {

	BOOL _sourceIsManaged;
	BOOL _actionIsImport;
	LSApplicationProxy* _applicationProxy;
	LSDocumentProxy* _documentProxy;

}

@property (nonatomic,retain) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) LSDocumentProxy * documentProxy;                    //@synthesize documentProxy=_documentProxy - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                               //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic) BOOL actionIsImport;                                //@synthesize actionIsImport=_actionIsImport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(void)enumerateAvailableApplicationsInPreferredOrderForOpeningDocument:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)openInActivitiesForItems:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
+(id)activitiesForFileURL:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
-(LSApplicationProxy *)applicationProxy;
-(BOOL)sourceIsManaged;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setDocumentProxy:(LSDocumentProxy *)arg1 ;
-(void)setActionIsImport:(BOOL)arg1 ;
-(id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 sourceIsManaged:(BOOL)arg3 actionIsImport:(BOOL)arg4 ;
-(id)_firstMatchingDocumentProxyForActivityItems:(id)arg1 ;
-(BOOL)actionIsImport;
-(id)_nonImportActivityTitle;
-(void)_performOpenWithUserInfo:(id)arg1 ;
-(LSDocumentProxy *)documentProxy;
@end

