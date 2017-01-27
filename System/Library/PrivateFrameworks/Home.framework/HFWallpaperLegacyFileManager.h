/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(id)init;
-(NSURL *)wallpaperFolderURL;
-(id)filenameForType:(long long)arg1 variant:(long long)arg2 ;
-(void)migrateCache:(/*^block*/id)arg1 ;
-(id)clearAllWallpapers;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
@end

