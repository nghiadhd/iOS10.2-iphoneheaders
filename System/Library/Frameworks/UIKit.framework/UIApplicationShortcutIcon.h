/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <NSCopying> {

	SBSApplicationShortcutIcon* _sbsShortcutIcon;

}

@property (nonatomic,readonly) SBSApplicationShortcutIcon * sbsShortcutIcon;              //@synthesize sbsShortcutIcon=_sbsShortcutIcon - In the implementation block
+(id)iconWithContact:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)sbsIconTypeForIconType:(long long)arg1 ;
+(id)iconWithCustomImage:(id)arg1 isTemplate:(BOOL)arg2 ;
+(id)iconWithType:(long long)arg1 ;
+(id)iconWithTemplateImageName:(id)arg1 ;
+(id)iconWithCustomImage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSBSApplicationShortcutIcon:(id)arg1 ;
-(SBSApplicationShortcutIcon *)sbsShortcutIcon;
@end
