/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {

	EDString* mText;
	EDAlignmentInfo* mAlignmentInfo;
	EDProtection* mProtection;

}
+(id)textBox;
-(void)dealloc;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)arg1 ;
-(void)setProtection:(id)arg1 ;
-(id)protection;
@end

