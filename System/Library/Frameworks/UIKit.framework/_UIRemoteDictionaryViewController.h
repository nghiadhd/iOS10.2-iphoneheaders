/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, _UIDictionaryManager;

@interface _UIRemoteDictionaryViewController : UITableViewController {

	NSArray* _availableDictionaries;
	_UIDictionaryManager* _dictionaryAssetManager;

}

@property (nonatomic,retain) _UIDictionaryManager * dictionaryAssetManager;              //@synthesize dictionaryAssetManager=_dictionaryAssetManager - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(id)_cloudBackgroundImage;
-(id)_downloadArrowImage;
-(id)_downloadImageWithTintColor:(id)arg1 ;
-(void)_handleDownloadButton:(id)arg1 ;
-(BOOL)_isStalledAutoDownloadAsset:(id)arg1 ;
-(id)_downloadButton;
-(_UIDictionaryManager *)dictionaryAssetManager;
-(void)setDictionaryAssetManager:(_UIDictionaryManager *)arg1 ;
@end

