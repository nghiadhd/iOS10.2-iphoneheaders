/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(BOOL)isExtensionInputMode;
-(id)identifierWithLayouts;
-(BOOL)isDefaultRightToLeft;
-(id)hardwareLayout;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(BOOL)defaultLayoutIsASCIICapable;
-(void)setPrimaryLanguage:(id)arg1 ;
-(BOOL)isDesiredForTraits:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)containingBundle;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)displayName;
-(id)containingBundleDisplayName;
-(id)normalizedIdentifierLevels;
-(id)extendedDisplayName;
@end

