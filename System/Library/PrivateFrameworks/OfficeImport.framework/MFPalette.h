/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFObject.h>

@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {

	NSMutableArray* m_colours;

}
+(id)paletteWithColours:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)selectInto:(id)arg1 ;
-(id)initWithColours:(id)arg1 ;
-(BOOL)setEntries:(int)arg1 :(id)arg2 ;
-(BOOL)resize:(int)arg1 ;
-(id)getColour:(int)arg1 ;
@end

