/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <UIKit/UIActivityItemSource.h>

@class AVAsset, NSString, CSSearchableItem, NSDate, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource> {

	AVAsset* _avAsset;
	NSString* _path;
	BOOL _pathWasInvalid;
	BOOL _ignoreChangeForEntityRevision;
	BOOL _hasPendingChangeAffectingEntityRevision;

}

@property (nonatomic,copy,readonly) CSSearchableItem * searchableItem; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleDisallowingEmptyString; 
@property (assign,nonatomic) long long recordingID; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,getter=isSynced,nonatomic) BOOL synced; 
@property (nonatomic,readonly) BOOL hasPendingChangeAffectingEntityRevision;              //@synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision - In the implementation block
@property (assign,getter=isPendingRestore,nonatomic) BOOL pendingRestore; 
@property (nonatomic,readonly) AVAsset * avAsset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedStringForRecordingLabel:(long long)arg1 ;
+(id)propertiesAffectingEntityRevision;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(void)setName:(id)arg1 ;
-(id)name;
-(NSURL *)url;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)label;
-(void)willChangeValueForKey:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)customLabel;
-(void)setCustomLabel:(id)arg1 ;
-(void)awakeFromInsert;
-(void)willSave;
-(void)awakeFromFetch;
-(CSSearchableItem *)searchableItem;
-(NSURL *)URIRepresentation;
-(id)detailLabel;
-(long long)recordingID;
-(void)setRecordingID:(long long)arg1 ;
-(BOOL)hasPendingChangeAffectingEntityRevision;
-(BOOL)isContentBeingModified;
-(void)setLabelPreset:(long long)arg1 ;
-(void)_validatePath;
-(NSString *)titleDisallowingEmptyString;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(long long)labelPreset;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1 ;
-(BOOL)isPendingRestore;
-(void)setPendingRestore:(BOOL)arg1 ;
-(BOOL)isSynced;
-(void)setSynced:(BOOL)arg1 ;
-(AVAsset *)avAsset;
@end

