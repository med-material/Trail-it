using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utils : MonoBehaviour {

	public static string BoolToNumberString(bool booleanValue) {
		if (booleanValue) {
			return "1";
		} else {
			return "0";
		}
	}

	public static string Md5Sum(string strToEncrypt)
	{
		System.Text.UTF8Encoding ue = new System.Text.UTF8Encoding();
		byte[] bytes = ue.GetBytes(strToEncrypt);

		// encrypt bytes
		System.Security.Cryptography.MD5CryptoServiceProvider md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
		byte[] hashBytes = md5.ComputeHash(bytes);

		// Convert the encrypted bytes back to a string (base 16)
		string hashString = "";

		for (int i = 0; i < hashBytes.Length; i++)
		{
			hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
		}

		return hashString.PadLeft(32, '0');
	}

	public static void ShuffleArray<T>(T[] arr)
	{
		for (int i = arr.Length - 1; i > 0; i--)
		{
			int r = UnityEngine.Random.Range(0, i);
			T tmp = arr[i];
			arr[i] = arr[r];
			arr[r] = tmp;
		}
	}

	public static void Shuffle<T>(IList<T> list)
	{
		System.Random rng = new System.Random();
		int n = list.Count;
		while (n > 1)
		{
			n--;
			int k = rng.Next(n + 1);
			T value = list[k];
			list[k] = list[n];
			list[n] = value;
		}
	}

	public static float GetMedian(List<float> source)
	{
		// Create a copy of the input, and sort the copy
		List<float> temp = new List<float>();
		temp = source;
		temp.Sort();

		int count = temp.Count;
		if (count == 0)
		{
			return -1;
		}
		else if (count % 2 == 0)
		{
			// count is even, average two middle elements
			float a = temp[count / 2 - 1];
			float b = temp[count / 2];
			float result = ((a + b) / 2);
			return result;
		}
		else
		{
			// count is odd, return the middle element
			float result = temp[count / 2];
			return result;
		}
	}

	public static string StringFromFloatList(List<float> source)
	{
		string debugString = "";
		foreach (float number in source)
		{
			debugString += number.ToString("0.00") + ",";
		}
		return debugString;
	}

	public static string StringFromIntList(List<int> source)
	{
		string debugString = "";
		foreach (int number in source)
		{
			debugString += number.ToString() + ",";
		}
		return debugString;
	}

}
