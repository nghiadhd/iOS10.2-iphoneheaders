/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, UIColor, UIImage, NSDate;

@interface WebBookmark : NSObject <NSCopying> {

	BOOL _folder;
	NSString* _title;
	NSString* _url;
	NSString* _UUID;
	NSString* _serverID;
	NSString* _syncKey;
	NSData* _syncData;
	BOOL _editable;
	BOOL _deletable;
	BOOL _hidden;
	BOOL _syncable;
	BOOL _fetchedIconData;
	NSData* _iconData;
	BOOL _locallyAdded;
	int _archiveStatus;
	int _webFilterStatus;
	NSDictionary* _extraAttributes;
	NSDictionary* _localAttributes;
	int _id;
	int _parentID;
	int _specialID;
	unsigned _orderIndex;
	BOOL _inserted;
	BOOL _needsSyncUpdate;

}

@property (setter=ss_setIconKeyColor:,nonatomic,retain) UIColor * ss_iconKeyColor; 
@property (nonatomic,readonly) UIImage * ss_icon; 
@property (nonatomic,retain) NSString * serverID; 
@property (nonatomic,retain) NSString * syncKey; 
@property (nonatomic,retain) NSData * syncData; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentationForInMemoryChangeTracking; 
@property (nonatomic,retain) NSString * previewText; 
@property (assign,nonatomic) BOOL locallyAdded; 
@property (assign,nonatomic) int archiveStatus; 
@property (assign,nonatomic) int webFilterStatus; 
@property (nonatomic,retain) NSDate * dateLastArchived; 
@property (nonatomic,retain) NSDate * dateAdded; 
@property (nonatomic,retain) NSDate * dateLastViewed; 
@property (nonatomic,retain) NSDate * dateLastFetched; 
@property (nonatomic,retain) NSDictionary * nextPageURLs; 
@property (nonatomic,retain) NSString * localPreviewText; 
@property (nonatomic,retain) NSString * siteName; 
@property (nonatomic,retain) NSString * sourceBundleID; 
@property (nonatomic,retain) NSString * sourceLocalizedAppName; 
@property (assign,nonatomic) BOOL needsSyncUpdate;                                                                 //@synthesize needsSyncUpdate=_needsSyncUpdate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * address;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int parentID;                                                                       //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) int identifier;                                                                     //@synthesize id=_id - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) int specialID;                                                                      //@synthesize specialID=_specialID - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable;                                                    //@synthesize editable=_editable - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable;                                                  //@synthesize deletable=_deletable - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                                        //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFolder,nonatomic,readonly) BOOL folder;                                                        //@synthesize folder=_folder - In the implementation block
@property (getter=isInserted,nonatomic,readonly) BOOL inserted;                                                    //@synthesize inserted=_inserted - In the implementation block
@property (getter=isSyncable,nonatomic,readonly) BOOL syncable;                                                    //@synthesize syncable=_syncable - In the implementation block
@property (assign,nonatomic) BOOL fetchedIconData;                                                                 //@synthesize fetchedIconData=_fetchedIconData - In the implementation block
@property (nonatomic,retain) NSData * iconData;                                                                    //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                                                       //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * localAttributes;                                                       //@synthesize localAttributes=_localAttributes - In the implementation block
+(id)_trimmedTitle:(id)arg1 ;
+(id)_trimmedPreviewText:(id)arg1 ;
-(UIColor *)ss_iconKeyColor;
-(void)ss_setIconKeyColor:(id)arg1 ;
-(UIImage *)ss_icon;
-(id)init;
-(BOOL)isHidden;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)identifier;
-(NSString *)title;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(void)_setHidden:(BOOL)arg1 ;
-(id)localizedTitle;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSString *)syncKey;
-(id)initFolderWithParentID:(int)arg1 ;
-(void)_markSpecial:(int)arg1 ;
-(void)cleanupRedundantPreviewText;
-(int)specialID;
-(BOOL)isReadingListItem;
-(BOOL)isReadingListFolder;
-(unsigned)_orderIndex;
-(id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentationForInMemoryChangeTracking;
-(void)_setID:(int)arg1 ;
-(void)_setInserted:(BOOL)arg1 ;
-(id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(BOOL)isEqualToBookmark:(id)arg1 ;
-(id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(BOOL)isBookmarksBarFolder;
-(BOOL)isWebFilterWhiteListFolder;
-(BOOL)isFrequentlyVisitedSitesFolder;
-(BOOL)needsSyncUpdate;
-(void)setNeedsSyncUpdate:(BOOL)arg1 ;
-(BOOL)fetchedIconData;
-(int)archiveStatus;
-(void)setWebFilterStatus:(int)arg1 ;
-(NSDate *)dateLastViewed;
-(unsigned long long)archiveSize;
-(void)setArchiveStatus:(int)arg1 ;
-(void)setDateLastArchived:(NSDate *)arg1 ;
-(void)clearArchiveSynchronously;
-(id)_initWithSqliteRow:(sqlite3_stmtRef)arg1 ;
-(void)clearArchive;
-(void)_setOrderIndex:(unsigned)arg1 ;
-(BOOL)fullArchiveAvailable;
-(BOOL)locallyAdded;
-(int)webFilterStatus;
-(void)_setSyncable:(BOOL)arg1 ;
-(id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 ;
-(id)_initWithSqliteRow:(sqlite3_stmtRef)arg1 hasIcon:(BOOL)arg2 ;
-(id)_readingListPropertyNamed:(id)arg1 ;
-(void)_modifyExtraReadingListAttributes:(/*^block*/id)arg1 ;
-(void)_modifyLocalReadingListAttributes:(/*^block*/id)arg1 ;
-(NSString *)localPreviewText;
-(void)setLocallyAdded:(BOOL)arg1 ;
-(NSDate *)dateLastArchived;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(NSDate *)dateLastFetched;
-(void)setDateLastFetched:(NSDate *)arg1 ;
-(NSString *)sourceLocalizedAppName;
-(void)setSourceLocalizedAppName:(NSString *)arg1 ;
-(NSString *)sourceBundleID;
-(void)setSourceBundleID:(NSString *)arg1 ;
-(void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3 ;
-(void)setNextPageURLs:(NSDictionary *)arg1 ;
-(NSDictionary *)nextPageURLs;
-(void)setLocalPreviewText:(NSString *)arg1 ;
-(id)_suggestedFileNameForWebView:(id)arg1 ;
-(unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2 ;
-(void)_removeDirectoryAtPath:(id)arg1 ;
-(id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(BOOL*)arg2 ;
-(id)webarchivePathForNextPageURL:(id)arg1 ;
-(BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3 ;
-(BOOL)shouldReattemptArchive;
-(NSDictionary *)extraAttributes;
-(NSDate *)dateAdded;
-(BOOL)isInserted;
-(BOOL)isDeletable;
-(void)setSyncKey:(NSString *)arg1 ;
-(BOOL)isFolder;
-(NSString *)address;
-(NSDictionary *)localAttributes;
-(void)setLocalAttributes:(NSDictionary *)arg1 ;
-(NSData *)iconData;
-(id)initWithTitle:(id)arg1 address:(id)arg2 ;
-(BOOL)isBookmarksMenuFolder;
-(void)setIconData:(NSData *)arg1 ;
-(void)setFetchedIconData:(BOOL)arg1 ;
-(BOOL)isSyncable;
-(void)setSyncData:(NSData *)arg1 ;
-(NSData *)syncData;
-(NSString *)previewText;
-(void)setPreviewText:(NSString *)arg1 ;
-(void)_setParentID:(int)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(id)shortTypeDescription;
-(int)parentID;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
@end

