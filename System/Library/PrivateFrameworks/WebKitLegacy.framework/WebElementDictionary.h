/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {

	HitTestResult* _result;
	NSMutableDictionary* _cache;
	NSMutableSet* _nilValues;
	BOOL _cacheComplete;

}
+(void)initializeLookupTable;
+(void)initialize;
-(id)initWithHitTestResult:(const HitTestResult*)arg1 ;
-(id)_domNode;
-(id)_webFrame;
-(id)_altDisplayString;
-(id)_absoluteImageURL;
-(id)_absoluteMediaURL;
-(id)_spellingToolTip;
-(id)_absoluteLinkURL;
-(id)_targetWebFrame;
-(id)_titleDisplayString;
-(id)_textContent;
-(id)_isLiveLink;
-(id)_isContentEditable;
-(id)_isInScrollBar;
-(void)_fillCache;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)_title;
-(id)_isSelected;
-(id)keyEnumerator;
@end

