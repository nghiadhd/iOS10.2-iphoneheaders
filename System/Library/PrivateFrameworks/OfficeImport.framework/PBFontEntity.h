/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBFontEntity : NSObject {

	NSString* mFaceName;
	int mCharSet;
	int mType;
	int mFamily;

}
-(void)dealloc;
-(int)type;
-(int)family;
-(id)faceName;
-(int)charSet;
-(id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
@end

