//
//  SCUtils.h
//  
//
//  Created by Charles Stigler on 08/05/2017.
//
//

#import <Foundation/Foundation.h>

@interface SCUtils : NSObject

+ (NSString*)stringWithoutRegexSpecialChars:(NSString*)input;
+ (NSArray<NSDictionary*>*)knownAppDicts;

@end
