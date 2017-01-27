/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSArray;

@interface ABModelRecord : NSObject {

	int _recordID;
	CFStringRef _sortKey;
	long long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;

}
-(void)dealloc;
-(BOOL)isGroup;
-(int)recordID;
-(CFStringRef)sortKey;
-(id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(CFStringRef)arg5 ;
-(long long)highlightIndex;
-(id)namePieces;
@end

