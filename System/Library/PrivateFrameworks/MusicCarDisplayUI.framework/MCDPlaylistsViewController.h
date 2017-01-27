/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDTableViewController.h>

@class NSString;

@interface MCDPlaylistsViewController : MCDTableViewController {

	NSString* _playlistSortSetting;

}

@property (nonatomic,retain) NSString * playlistSortSetting;              //@synthesize playlistSortSetting=_playlistSortSetting - In the implementation block
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)_limitedUIDidChange;
-(void)_updateQuery;
-(void)_userDefaultsChanged:(id)arg1 ;
-(NSString *)playlistSortSetting;
-(void)setPlaylistSortSetting:(NSString *)arg1 ;
@end

