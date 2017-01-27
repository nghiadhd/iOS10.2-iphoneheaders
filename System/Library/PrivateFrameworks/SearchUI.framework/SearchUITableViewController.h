/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIKeyboardableTableViewController.h>

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController {

	BOOL _insetSectionsOverride;
	BOOL _hasCheckedInsetSectionsOverride;
	unsigned long long _style;

}

@property (assign) unsigned long long style;                          //@synthesize style=_style - In the implementation block
@property (assign) BOOL insetSectionsOverride;                        //@synthesize insetSectionsOverride=_insetSectionsOverride - In the implementation block
@property (assign) BOOL hasCheckedInsetSectionsOverride;              //@synthesize hasCheckedInsetSectionsOverride=_hasCheckedInsetSectionsOverride - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithUIStyle:(unsigned long long)arg1 ;
-(void)setAllowsHeaderViewsToFloat:(BOOL)arg1 ;
-(BOOL)insetSectionsOverride;
-(void)setInsetSectionsOverride:(BOOL)arg1 ;
-(BOOL)hasCheckedInsetSectionsOverride;
-(void)setHasCheckedInsetSectionsOverride:(BOOL)arg1 ;
@end

