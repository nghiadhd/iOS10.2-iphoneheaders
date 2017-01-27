/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDParagraphProperties, WDParagraph, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper {

	WDParagraphProperties* wdParaProperties;
	WDParagraph* wdParagraph;
	WMParagraphStyle* mStyle;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(BOOL)arg3 ;
-(BOOL)isListItem;
-(void)mapListStyleFromParagraphStyleWithState:(id)arg1 ;
-(void)mapParagraphStyle;
-(void)mapListStyleAt:(id)arg1 state:(id)arg2 ;
-(void)mapParagraphProperties;
-(void)destyleEmptyParagraph;
-(BOOL)getListLevel:(char*)arg1 andListIndex:(int*)arg2 fromStyleOnly:(BOOL)arg3 ;
-(BOOL)checkListId:(long long)arg1 level:(unsigned char)arg2 ;
-(void)updateOutlineStateWithListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4 ;
-(void)mapBulletAt:(id)arg1 forIndex:(int)arg2 inLevelDescription:(id)arg3 listState:(id)arg4 ;
-(void)getListLevel:(char*)arg1 andListIndex:(int*)arg2 foundListLevel:(BOOL*)arg3 foundListIndex:(BOOL*)arg4 fromStyle:(id)arg5 ;
-(void)getListLevel:(char*)arg1 andListIndex:(int*)arg2 foundListLevel:(BOOL*)arg3 foundListIndex:(BOOL*)arg4 fromParagraphProperties:(id)arg5 ;
-(void)mapStyleFromListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4 ;
-(void)mapBulletFromListId:(int)arg1 listLevel:(unsigned char)arg2 at:(id)arg3 document:(id)arg4 state:(id)arg5 ;
-(id)bulletLabelForIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3 ;
-(id)labelStringWithGap:(id)arg1 ;
@end

