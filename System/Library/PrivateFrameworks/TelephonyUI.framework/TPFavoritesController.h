/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol TPFavoritesControllerDelegate;
@class TUCallProviderManager, NSArray, CNContactStore, CNFavorites, NSMutableDictionary, NSString;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate> {

	TUCallProviderManager* _callProviderManager;
	NSArray* _favoritesEntries;
	id<TPFavoritesControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNFavorites* _favorites;
	NSMutableDictionary* _transportNameCache;

}

@property (nonatomic,copy) NSArray * favoritesEntries;                                       //@synthesize favoritesEntries=_favoritesEntries - In the implementation block
@property (nonatomic,retain) CNFavorites * favorites;                                        //@synthesize favorites=_favorites - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * transportNameCache;                //@synthesize transportNameCache=_transportNameCache - In the implementation block
@property (assign,nonatomic,__weak) id<TPFavoritesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TUCallProviderManager * callProviderManager;                    //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<TPFavoritesControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TPFavoritesControllerDelegate>)delegate;
-(id)addEntry:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setFavorites:(CNFavorites *)arg1 ;
-(CNFavorites *)favorites;
-(TUCallProviderManager *)callProviderManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)handleContactStoreDidChangeNotification:(id)arg1 ;
-(void)handleFavoritesChangedNotification:(id)arg1 ;
-(void)handleFavoritesEntryChangedNotification:(id)arg1 ;
-(unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1 ;
-(NSMutableDictionary *)transportNameCache;
-(id)dialRequestForCallProvider:(id)arg1 ;
-(NSArray *)favoritesEntries;
-(void)setFavoritesEntries:(NSArray *)arg1 ;
-(BOOL)canAddEntry;
-(void)removeEntriesAtIndexes:(id)arg1 ;
-(id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2 ;
-(id)transportNameForFavoritesEntry:(id)arg1 ;
-(id)dialRequestForFavoritesEntry:(id)arg1 ;
-(void)save;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

