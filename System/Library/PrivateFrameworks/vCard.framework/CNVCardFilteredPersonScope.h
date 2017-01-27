/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject {

	NSSet* _blacklist;
	unsigned long long _filterOptions;

}

@property (readonly) NSSet * blacklist;                             //@synthesize blacklist=_blacklist - In the implementation block
@property (readonly) unsigned long long filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
-(BOOL)isEmpty;
-(id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2 ;
-(NSSet *)blacklist;
-(unsigned long long)filterOptions;
@end

