/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSFileHandle;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _libraryPath;
	NSData* _trackData;
	NSData* _playlistData;
	NSFileHandle* _fileHandle;
	NSString* _syncAnchor;
	BOOL _resetSync;
	BOOL _sagaEnabled;
	long long _storeAccountID;
	long long _preferredVideoQuality;
	unsigned _homeSharingBasePlaylistID;
	BOOL _tracksAreLibraryOwnedContent;
	BOOL _playlistsAreLibraryOwnedContent;
	BOOL _pendingMatch;
	BOOL _isServerImport;
	NSString* _syncLibraryID;

}

@property (nonatomic,readonly) NSString * libraryPath;                               //@synthesize libraryPath=_libraryPath - In the implementation block
@property (nonatomic,readonly) NSData * trackData;                                   //@synthesize trackData=_trackData - In the implementation block
@property (nonatomic,readonly) NSData * playlistData;                                //@synthesize playlistData=_playlistData - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;                            //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,readonly) NSString * syncAnchor;                                //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (getter=isResetSync,nonatomic,readonly) BOOL resetSync;                    //@synthesize resetSync=_resetSync - In the implementation block
@property (getter=isSagaEnabled,nonatomic,readonly) BOOL sagaEnabled;                //@synthesize sagaEnabled=_sagaEnabled - In the implementation block
@property (nonatomic,readonly) long long storeAccountID;                             //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) long long preferredVideoQuality;                      //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (nonatomic,readonly) unsigned homeSharingBasePlaylistID;                   //@synthesize homeSharingBasePlaylistID=_homeSharingBasePlaylistID - In the implementation block
@property (nonatomic,readonly) BOOL tracksAreLibraryOwnedContent;                    //@synthesize tracksAreLibraryOwnedContent=_tracksAreLibraryOwnedContent - In the implementation block
@property (nonatomic,readonly) BOOL playlistsAreLibraryOwnedContent;                 //@synthesize playlistsAreLibraryOwnedContent=_playlistsAreLibraryOwnedContent - In the implementation block
@property (getter=isPendingMatch,nonatomic,readonly) BOOL pendingMatch;              //@synthesize pendingMatch=_pendingMatch - In the implementation block
@property (nonatomic,readonly) BOOL isServerImport;                                  //@synthesize isServerImport=_isServerImport - In the implementation block
@property (nonatomic,readonly) NSString * syncLibraryID;                             //@synthesize syncLibraryID=_syncLibraryID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)syncAnchor;
-(NSString *)syncLibraryID;
-(NSString *)libraryPath;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(BOOL)isResetSync;
-(BOOL)isSagaEnabled;
-(long long)preferredVideoQuality;
-(unsigned)homeSharingBasePlaylistID;
-(BOOL)tracksAreLibraryOwnedContent;
-(BOOL)playlistsAreLibraryOwnedContent;
-(BOOL)isPendingMatch;
-(BOOL)isServerImport;
-(long long)storeAccountID;
-(NSData *)trackData;
-(id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3 ;
-(NSData *)playlistData;
-(NSFileHandle *)fileHandle;
@end

